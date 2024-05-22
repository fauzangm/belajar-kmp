package id.posgram.belajar_kmp.android.di

import app.cash.sqldelight.db.SqlDriver
import id.posgram.belajar_kmp.articles.viewmodel.ArticlesViewModel
import id.posgram.belajar_kmp.db.DatabaseDriverFactory
import org.koin.android.ext.koin.androidContext
import org.koin.androidx.viewmodel.dsl.viewModel
import org.koin.dsl.module
import posgram.belajar_kmp.db.ArticleDB


val viewModelsModule = module {

    viewModel { ArticlesViewModel(get()) }
}

val databaseModuel = module {
    single<SqlDriver> { DatabaseDriverFactory(androidContext()).createDriver() }
    single<ArticleDB> { ArticleDB(get()) }
}