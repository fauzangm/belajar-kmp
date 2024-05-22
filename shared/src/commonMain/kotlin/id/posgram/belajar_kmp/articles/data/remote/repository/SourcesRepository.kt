package id.posgram.belajar_kmp.articles.data.remote.repository

import id.posgram.belajar_kmp.articles.data.local.SourcesDataSource
import id.posgram.belajar_kmp.articles.data.model.SourceRaw
import id.posgram.belajar_kmp.articles.data.remote.service.SourcesService

class SourcesRepository(
    private val dataSource: SourcesDataSource,
    private val service: SourcesService
) {

    suspend fun getAllSources(): List<SourceRaw> {
        val sourcesDb = dataSource.getAllSources()
        if (sourcesDb.isEmpty()) {
            dataSource.clearSources()
            val fetchedSources = service.fetchSources()
            dataSource.createSources(fetchedSources)
            return fetchedSources
        }
        return sourcesDb
    }
}