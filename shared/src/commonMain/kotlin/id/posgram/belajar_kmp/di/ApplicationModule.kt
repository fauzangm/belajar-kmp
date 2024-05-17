package id.posgram.belajar_kmp.di

import id.posgram.belajar_kmp.articles.ArticlesViewModel
import id.posgram.belajar_kmp.articles.service.ArticleService
import id.posgram.belajar_kmp.articles.usecase.ArticlesUseCase
import io.ktor.client.HttpClient
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.serialization.kotlinx.json.json
import kotlinx.serialization.json.Json
import org.koin.dsl.module

val articleModule =  module {
    single<ArticleService> {  ArticleService(get()) }
    single<ArticlesUseCase> {  ArticlesUseCase(get()) }
    single<ArticlesViewModel> {  ArticlesViewModel(get()) }
}

val networkModule = module {
    single<HttpClient> {
        HttpClient {
            install(ContentNegotiation){
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
    networkModule
)