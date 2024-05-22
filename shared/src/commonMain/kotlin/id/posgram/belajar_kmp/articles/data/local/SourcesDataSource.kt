package id.posgram.belajar_kmp.articles.data.local

import id.posgram.belajar_kmp.articles.data.model.SourceRaw
import posgram.belajar_kmp.db.ArticleDB

class SourcesDataSource(private val db: ArticleDB) {

    fun getAllSources(): List<SourceRaw> =
        db.articleDBQueries.selectAllSources(::mapSource).executeAsList()

    fun clearSources() =
        db.articleDBQueries.removeAllSources()

    private fun mapSource(
        id: String,
        name: String,
        desc: String,
        language: String,
        country: String
    ): SourceRaw {
        return SourceRaw(
            id,
            name,
            desc,
            language,
            country
        )
    }

    internal fun createSources(sources: List<SourceRaw>) {
        db.articleDBQueries.transaction {
            sources.forEach { source ->
                insertSource(source)
            }
        }
    }

    private fun insertSource(source: SourceRaw) {
        db.articleDBQueries.insertSource(
            source.id,
            source.name,
            source.desc,
            source.language,
            source.country,
        )
    }
}