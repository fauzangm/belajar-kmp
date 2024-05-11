#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedEventsDispatcher<ListenerType>, SharedKotlinx_coroutines_coreCoroutineDispatcher, SharedCFlow<T>, SharedCStateFlow<T>, SharedArticle, SharedArticlesState, SharedViewModel, SharedArticlesViewModelAction, SharedArticlesViewModelActionDataSucces, SharedCMutableStateFlow<T>, NSNotificationCenter, UIButton, UIImage, UIControl, UILabel, UISwitch, UITextField, UITextView, UIView, UIColor, SharedKotlinThrowable, SharedKotlinArray<T>, SharedKotlinException, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedKotlinAbstractCoroutineContextElement, SharedKotlinx_coroutines_coreCoroutineDispatcherKey, SharedKotlinAbstractCoroutineContextKey<B, E>;

@protocol SharedKotlinx_coroutines_coreFlowCollector, SharedKotlinx_coroutines_coreFlow, SharedDisposableHandle, SharedKotlinx_coroutines_coreCoroutineScope, SharedKotlinx_coroutines_coreSharedFlow, SharedKotlinx_coroutines_coreStateFlow, SharedKotlinx_coroutines_coreMutableSharedFlow, SharedKotlinx_coroutines_coreMutableStateFlow, SharedKotlinx_coroutines_coreDisposableHandle, SharedKotlinCoroutineContext, SharedKotlinCoroutineContextKey, SharedKotlinCoroutineContextElement, SharedKotlinContinuation, SharedKotlinContinuationInterceptor, SharedKotlinx_coroutines_coreRunnable, SharedKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventsDispatcher")))
@interface SharedEventsDispatcher<ListenerType> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithListener:(ListenerType)listener __attribute__((swift_name("init(listener:)"))) __attribute__((objc_designated_initializer));
- (void)dispatchEventBlock:(void (^)(ListenerType))block __attribute__((swift_name("dispatchEvent(block:)")));
@property ListenerType _Nullable listener __attribute__((swift_name("listener")));
@end

__attribute__((swift_name("EventsDispatcherOwner")))
@protocol SharedEventsDispatcherOwner
@required
@property (readonly) SharedEventsDispatcher<id> *eventsDispatcher __attribute__((swift_name("eventsDispatcher")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("CFlow")))
@interface SharedCFlow<T> : SharedBase <SharedKotlinx_coroutines_coreFlow>
- (instancetype)initWithFlow:(id<SharedKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<SharedDisposableHandle>)subscribeOnCollect:(void (^)(T _Nullable))onCollect __attribute__((swift_name("subscribe(onCollect:)")));
- (id<SharedDisposableHandle>)subscribeCoroutineScope:(id<SharedKotlinx_coroutines_coreCoroutineScope>)coroutineScope dispatcher:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher onCollect:(void (^)(T _Nullable))onCollect __attribute__((swift_name("subscribe(coroutineScope:dispatcher:onCollect:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol SharedKotlinx_coroutines_coreSharedFlow <SharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SharedKotlinx_coroutines_coreStateFlow <SharedKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("CStateFlow")))
@interface SharedCStateFlow<T> : SharedCFlow<T> <SharedKotlinx_coroutines_coreStateFlow>
- (instancetype)initWithFlow:(id<SharedKotlinx_coroutines_coreStateFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol SharedKotlinx_coroutines_coreMutableSharedFlow <SharedKotlinx_coroutines_coreSharedFlow, SharedKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol SharedKotlinx_coroutines_coreMutableStateFlow <SharedKotlinx_coroutines_coreStateFlow, SharedKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CMutableStateFlow")))
@interface SharedCMutableStateFlow<T> : SharedCStateFlow<T> <SharedKotlinx_coroutines_coreMutableStateFlow>
- (instancetype)initWithFlow:(id<SharedKotlinx_coroutines_coreMutableStateFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("DisposableHandle")))
@protocol SharedDisposableHandle <SharedKotlinx_coroutines_coreDisposableHandle>
@required
@end

__attribute__((swift_name("ViewModel")))
@interface SharedViewModel : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onCleared __attribute__((swift_name("onCleared()")));
@property (readonly) id<SharedKotlinx_coroutines_coreCoroutineScope> viewModelScope __attribute__((swift_name("viewModelScope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface SharedPlatform : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)logSystemInfo __attribute__((swift_name("logSystemInfo()")));
@property (readonly) int32_t density __attribute__((swift_name("density")));
@property (readonly) NSString *deviceModel __attribute__((swift_name("deviceModel")));
@property (readonly) NSString *osName __attribute__((swift_name("osName")));
@property (readonly) NSString *osVersion __attribute__((swift_name("osVersion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArticlesState")))
@interface SharedArticlesState : SharedBase
- (instancetype)initWithArticles:(NSArray<SharedArticle *> *)articles loading:(BOOL)loading error:(NSString * _Nullable)error __attribute__((swift_name("init(articles:loading:error:)"))) __attribute__((objc_designated_initializer));
- (SharedArticlesState *)doCopyArticles:(NSArray<SharedArticle *> *)articles loading:(BOOL)loading error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(articles:loading:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedArticle *> *articles __attribute__((swift_name("articles")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL loading __attribute__((swift_name("loading")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArticlesViewModel")))
@interface SharedArticlesViewModel : SharedViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchArticleWithCompletionHandler:(void (^)(NSArray<SharedArticle *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchArticle(completionHandler:)")));
- (void)getArticles __attribute__((swift_name("getArticles()")));
@property (readonly) SharedCStateFlow<SharedArticlesState *> *articlesState __attribute__((swift_name("articlesState")));
@end

__attribute__((swift_name("ArticlesViewModel.Action")))
@interface SharedArticlesViewModelAction : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArticlesViewModel.ActionDataSucces")))
@interface SharedArticlesViewModelActionDataSucces : SharedArticlesViewModelAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dataSucces __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedArticlesViewModelActionDataSucces *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Article")))
@interface SharedArticle : SharedBase
- (instancetype)initWithTitle:(NSString *)title desc:(NSString *)desc date:(NSString *)date imageUrl:(NSString *)imageUrl __attribute__((swift_name("init(title:desc:date:imageUrl:)"))) __attribute__((objc_designated_initializer));
- (SharedArticle *)doCopyTitle:(NSString *)title desc:(NSString *)desc date:(NSString *)date imageUrl:(NSString *)imageUrl __attribute__((swift_name("doCopy(title:desc:date:imageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *date __attribute__((swift_name("date")));
@property (readonly) NSString *desc __attribute__((swift_name("desc")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BindingBaseKt")))
@interface SharedBindingBaseKt : SharedBase
+ (id<SharedDisposableHandle>)bind:(id)receiver flow:(SharedCStateFlow<id> *)flow setter:(void (^)(id, id _Nullable))setter __attribute__((swift_name("bind(_:flow:setter:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CFlowKt")))
@interface SharedCFlowKt : SharedBase
+ (SharedCFlow<id> *)cFlow:(id<SharedKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("cFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CMutableStateFlowKt")))
@interface SharedCMutableStateFlowKt : SharedBase
+ (SharedCMutableStateFlow<id> *)cMutableStateFlow:(id<SharedKotlinx_coroutines_coreMutableStateFlow>)receiver __attribute__((swift_name("cMutableStateFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CStateFlowKt")))
@interface SharedCStateFlowKt : SharedBase
+ (SharedCStateFlow<id> *)cStateFlow:(id<SharedKotlinx_coroutines_coreStateFlow>)receiver __attribute__((swift_name("cStateFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisposableHandleKt")))
@interface SharedDisposableHandleKt : SharedBase
+ (id<SharedDisposableHandle>)DisposableHandleBlock:(void (^)(void))block __attribute__((swift_name("DisposableHandle(block:)")));
+ (id<SharedDisposableHandle>)plus:(id<SharedDisposableHandle>)receiver other:(id<SharedDisposableHandle>)other __attribute__((swift_name("plus(_:other:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSNotificationCenterExtKt")))
@interface SharedNSNotificationCenterExtKt : SharedBase
+ (id<SharedDisposableHandle>)setEventHandler:(NSNotificationCenter *)receiver notification:(NSString * _Nullable)notification ref:(id)ref lambda:(void (^)(id))lambda __attribute__((swift_name("setEventHandler(_:notification:ref:lambda:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIButtonBindingsKt")))
@interface SharedUIButtonBindingsKt : SharedBase
+ (id<SharedDisposableHandle>)bindImage:(UIButton *)receiver flow:(SharedCStateFlow<SharedBoolean *> *)flow trueImage:(UIImage *)trueImage falseImage:(UIImage *)falseImage __attribute__((swift_name("bindImage(_:flow:trueImage:falseImage:)")));
+ (id<SharedDisposableHandle>)bindTitle:(UIButton *)receiver flow:(SharedCStateFlow<NSString *> *)flow __attribute__((swift_name("bindTitle(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIControlBindingsKt")))
@interface SharedUIControlBindingsKt : SharedBase
+ (id<SharedDisposableHandle>)bindEnabled:(UIControl *)receiver flow:(SharedCStateFlow<SharedBoolean *> *)flow __attribute__((swift_name("bindEnabled(_:flow:)")));
+ (id<SharedDisposableHandle>)bindFocusTwoWay:(UIControl *)receiver flow:(SharedCMutableStateFlow<SharedBoolean *> *)flow __attribute__((swift_name("bindFocusTwoWay(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIControlExtKt")))
@interface SharedUIControlExtKt : SharedBase
+ (id<SharedDisposableHandle>)setEventHandler:(UIControl *)receiver event:(uint64_t)event lambda:(void (^)(UIControl *))lambda __attribute__((swift_name("setEventHandler(_:event:lambda:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UILabelBindingsKt")))
@interface SharedUILabelBindingsKt : SharedBase
+ (id<SharedDisposableHandle>)bindText:(UILabel *)receiver flow:(SharedCStateFlow<NSString *> *)flow __attribute__((swift_name("bindText(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UISwitchBindingsKt")))
@interface SharedUISwitchBindingsKt : SharedBase
+ (id<SharedDisposableHandle>)bindSwitchOn:(UISwitch *)receiver flow:(SharedCStateFlow<SharedBoolean *> *)flow __attribute__((swift_name("bindSwitchOn(_:flow:)")));
+ (id<SharedDisposableHandle>)bindSwitchOnTwoWay:(UISwitch *)receiver flow:(SharedCMutableStateFlow<SharedBoolean *> *)flow __attribute__((swift_name("bindSwitchOnTwoWay(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UITextFieldBindingsKt")))
@interface SharedUITextFieldBindingsKt : SharedBase
+ (id<SharedDisposableHandle>)bindText:(UITextField *)receiver flow:(SharedCStateFlow<NSString *> *)flow __attribute__((swift_name("bindText(_:flow:)")));
+ (id<SharedDisposableHandle>)bindTextTwoWay:(UITextField *)receiver flow:(SharedCMutableStateFlow<NSString *> *)flow __attribute__((swift_name("bindTextTwoWay(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UITextViewBindingsKt")))
@interface SharedUITextViewBindingsKt : SharedBase
+ (id<SharedDisposableHandle>)bindFocusTwoWay:(UITextView *)receiver flow:(SharedCMutableStateFlow<SharedBoolean *> *)flow __attribute__((swift_name("bindFocusTwoWay(_:flow:)")));
+ (id<SharedDisposableHandle>)bindText:(UITextView *)receiver flow:(SharedCStateFlow<NSString *> *)flow __attribute__((swift_name("bindText(_:flow:)")));
+ (id<SharedDisposableHandle>)bindTextTwoWay:(UITextView *)receiver flow:(SharedCMutableStateFlow<NSString *> *)flow __attribute__((swift_name("bindTextTwoWay(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UIViewBindingsKt")))
@interface SharedUIViewBindingsKt : SharedBase
+ (id<SharedDisposableHandle>)bindBackgroundColor:(UIView *)receiver flow:(SharedCStateFlow<SharedBoolean *> *)flow trueColor:(UIColor *)trueColor falseColor:(UIColor *)falseColor __attribute__((swift_name("bindBackgroundColor(_:flow:trueColor:falseColor:)")));
+ (id<SharedDisposableHandle>)bindFocus:(UIView *)receiver flow:(SharedCStateFlow<SharedBoolean *> *)flow __attribute__((swift_name("bindFocus(_:flow:)")));
+ (id<SharedDisposableHandle>)bindHidden:(UIView *)receiver flow:(SharedCStateFlow<SharedBoolean *> *)flow __attribute__((swift_name("bindHidden(_:flow:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SharedKotlinAbstractCoroutineContextElement : SharedBase <SharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SharedKotlinContinuationInterceptor <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcher : SharedKotlinAbstractCoroutineContextElement <SharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol SharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SharedKotlinAbstractCoroutineContextKey<B, E> : SharedBase <SharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcherKey : SharedKotlinAbstractCoroutineContextKey<id<SharedKotlinContinuationInterceptor>, SharedKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(id<SharedKotlinCoroutineContextElement> _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
