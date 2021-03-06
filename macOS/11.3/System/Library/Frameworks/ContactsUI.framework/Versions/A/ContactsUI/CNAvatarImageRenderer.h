/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNUILikenessRendering, CNUIPRLikenessResolver, CNSchedulerProvider;
@interface CNAvatarImageRenderer : NSObject {

	id<CNUILikenessRendering> _renderer;
	id<CNUIPRLikenessResolver> _resolver;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) id<CNUILikenessRendering> renderer;                              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) id<CNUIPRLikenessResolver> resolver;                             //@synthesize resolver=_resolver - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                       //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNAvatarImageProvider> placeholderImageProvider; 
+(id)descriptorForRequiredKeys;
-(id)init;
-(id<CNUILikenessRendering>)renderer;
-(id<CNUIPRLikenessResolver>)resolver;
-(id)avatarImageForContacts:(id)arg1 scope:(id)arg2 ;
-(id<CNAvatarImageProvider>)placeholderImageProvider;
-(id)renderMonogramForString:(id)arg1 scope:(id)arg2 imageHandler:(/*^block*/id)arg3 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithLikenessRenderer:(id)arg1 likenessResolver:(id)arg2 schedulerProvider:(id)arg3 ;
-(id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 includePlaceholder:(char)arg3 imageHandler:(/*^block*/id)arg4 ;
-(id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 includePlaceholder:(char)arg3 workScheduler:(id)arg4 imageHandler:(/*^block*/id)arg5 ;
-(id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 placeholder:(char)arg3 workScheduler:(id)arg4 ;
-(id)runScopeBasedImageObservable:(/*^block*/id)arg1 scope:(id)arg2 imageHandler:(/*^block*/id)arg3 ;
-(id)renderedMonogramObservableForString:(id)arg1 scope:(id)arg2 ;
-(id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 imageHandler:(/*^block*/id)arg3 ;
@end

