package id.posgram.belajar_kmp.articles.usecase

import id.posgram.belajar_kmp.articles.model.Article
import id.posgram.belajar_kmp.articles.model.ArticleRaw
import id.posgram.belajar_kmp.articles.repository.ArticleRepository
import id.posgram.belajar_kmp.articles.service.ArticleService
import kotlinx.datetime.Clock
import kotlinx.datetime.Instant
import kotlinx.datetime.TimeZone
import kotlinx.datetime.daysUntil
import kotlinx.datetime.toLocalDateTime
import kotlinx.datetime.todayIn
import kotlinx.datetime.TimeZone.Companion.currentSystemDefault
import kotlin.math.abs

class ArticlesUseCase(private val repo: ArticleRepository) {

    suspend fun getArticles(fetch : Boolean): List<Article> {
        val articleRaw = repo.getArticles(fetch = fetch)
        return mapArticles(articleRaw)
    }

    private fun mapArticles(articleRaw: List<ArticleRaw>): List<Article> = articleRaw.map { raw ->
        Article(
            raw.title,
            raw.desc ?: "Click to find out more",
            formatStringToTanggal(raw.date),
            raw.imageUrl
                ?: "https://image.cnbcfm.com/api/v1/image/107326078-1698758530118-gettyimages-1765623456-wall26362_igj6ehhp.jpeg?v=1698758587&w=1920&h=1080"
        )
    }

    private fun formatStringToTanggal(
        date: String,
    ): String {
        val today = Clock.System.todayIn(currentSystemDefault())
        val days = today.daysUntil(
            Instant.parse(date).toLocalDateTime(TimeZone.currentSystemDefault()).date
        )

        val result = when {
            abs(days) > 1 -> "${abs((days))} days ago"
            abs(days) == 1 -> "Yesterday"
            else -> "Today"
        }
        return  result
    }
}