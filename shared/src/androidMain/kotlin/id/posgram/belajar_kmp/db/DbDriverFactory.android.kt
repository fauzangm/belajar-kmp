package id.posgram.belajar_kmp.db

import android.content.Context
import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.android.AndroidSqliteDriver
import posgram.belajar_kmp.db.ArticleDB

actual class DatabaseDriverFactory(private val context: Context) {

    actual fun createDriver(): SqlDriver =
        AndroidSqliteDriver(
            schema = ArticleDB.Schema,
            context = context,
            name = "Article.Database.db"
        )
}