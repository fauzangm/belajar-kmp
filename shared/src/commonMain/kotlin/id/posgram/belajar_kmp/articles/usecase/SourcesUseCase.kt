package id.posgram.belajar_kmp.articles.usecase

import id.posgram.belajar_kmp.articles.data.model.Source
import id.posgram.belajar_kmp.articles.data.model.SourceRaw
import id.posgram.belajar_kmp.articles.data.remote.repository.SourcesRepository

class SourcesUseCase(private val repo: SourcesRepository) {

    suspend fun getSources(): List<Source> {
        val sourcesRaw = repo.getAllSources()

        return mapSources(sourcesRaw)
    }

    private fun mapSources(sourcesRaw: List<SourceRaw>): List<Source> = sourcesRaw.map { raw ->
        Source(
            raw.id,
            raw.name,
            raw.desc,
            mapOrigin(raw),
        )
    }

    private fun mapOrigin(raw: SourceRaw) = "${raw.country} - ${raw.language}"
}