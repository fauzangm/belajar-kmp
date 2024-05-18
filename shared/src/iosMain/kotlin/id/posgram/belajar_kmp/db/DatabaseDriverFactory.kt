package id.posgram.belajar_kmp.db

import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.native.NativeSqliteDriver
import posgram.belajar_kmp.db.ArticleDB

actual class DatabaseDriverFactory() {
    actual fun createDriver(): SqlDriver =
        NativeSqliteDriver(
            schema = ArticleDB.Schema,
            name = "ArticleDb.db"
        )
}