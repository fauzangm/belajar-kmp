package id.posgram.belajar_kmp.android.di

import id.posgram.belajar_kmp.articles.ArticlesViewModel
import org.koin.androidx.viewmodel.dsl.viewModel
import org.koin.dsl.module


val viewModelsModule = module {

    viewModel { ArticlesViewModel(get()) }
}