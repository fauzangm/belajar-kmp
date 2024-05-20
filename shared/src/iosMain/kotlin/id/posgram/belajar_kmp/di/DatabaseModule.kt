package id.posgram.belajar_kmp.di

import app.cash.sqldelight.db.SqlDriver
import id.posgram.belajar_kmp.db.DatabaseDriverFactory
import org.koin.dsl.module
import posgram.belajar_kmp.db.ArticleDB

val databaseModule = module {
    single<SqlDriver> { DatabaseDriverFactory().createDriver() }
    single<ArticleDB> {  ArticleDB(get()) }
}