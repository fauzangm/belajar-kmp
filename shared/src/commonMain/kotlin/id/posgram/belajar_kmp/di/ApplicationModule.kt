package id.posgram.belajar_kmp.di

import id.posgram.belajar_kmp.articles.viewmodel.ArticlesViewModel
import id.posgram.belajar_kmp.articles.data.local.ArticlesDataSource
import id.posgram.belajar_kmp.articles.data.local.SourcesDataSource
import id.posgram.belajar_kmp.articles.data.remote.repository.ArticleRepository
import id.posgram.belajar_kmp.articles.data.remote.repository.SourcesRepository
import id.posgram.belajar_kmp.articles.data.remote.service.ArticleService
import id.posgram.belajar_kmp.articles.data.remote.service.SourcesService
import id.posgram.belajar_kmp.articles.usecase.ArticlesUseCase
import id.posgram.belajar_kmp.articles.usecase.SourcesUseCase
import id.posgram.belajar_kmp.articles.viewmodel.SourcesViewModel
import io.ktor.client.HttpClient
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.serialization.kotlinx.json.json
import kotlinx.serialization.json.Json
import org.koin.dsl.module

val articleModule = module {
    single<ArticleService> { ArticleService(get()) }
    single<ArticlesUseCase> { ArticlesUseCase(get()) }
    single<ArticlesViewModel> { ArticlesViewModel(get()) }
    single<ArticlesDataSource> { ArticlesDataSource(get()) }
    single<ArticleRepository> { ArticleRepository(get(), get()) }
}


val sourcesModule = module {

    single<SourcesService> { SourcesService(get()) }
    single<SourcesUseCase> { SourcesUseCase(get()) }
    single<SourcesDataSource> { SourcesDataSource(get()) }
    single<SourcesRepository> { SourcesRepository(get(), get()) }
    single<SourcesViewModel> { SourcesViewModel(get()) }
}

val networkModule = module {
    single<HttpClient> {
        HttpClient {
            install(ContentNegotiation) {
                json(Json {
                    prettyPrint = true
                    isLenient = true
                    ignoreUnknownKeys = true
                })
            }
        }
    }
}

val applicationModule = listOf(
    articleModule,
    sourcesModule,
    networkModule
)
