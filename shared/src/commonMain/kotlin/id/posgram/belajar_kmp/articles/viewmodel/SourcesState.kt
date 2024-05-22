package id.posgram.belajar_kmp.articles.viewmodel

import id.posgram.belajar_kmp.articles.data.model.Source

data class SourcesState (
    val sources: List<Source>,
    val loading: Boolean = false,
    val error: String? = null
)