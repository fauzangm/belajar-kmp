package id.posgram.belajar_kmp.android

import android.app.Application
import id.posgram.belajar_kmp.android.di.viewModelsModule
import id.posgram.belajar_kmp.di.applicationModule
import org.koin.android.ext.koin.androidContext
import org.koin.core.context.startKoin

class BaseApplication: Application() {

    override fun onCreate() {
        super.onCreate()
        initKoin()
    }


    private fun initKoin() {
        val modules = applicationModule + viewModelsModule

        startKoin {
            androidContext(this@BaseApplication)
            modules(modules)
        }
    }
}