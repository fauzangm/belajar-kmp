package id.posgram.belajar_kmp.articles.data.model

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class SourcesResponse(
    @SerialName("status")
    val status: String,
    @SerialName("sources")
    val sources: List<SourceRaw>,
)