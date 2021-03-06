/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol WBSWebExtensionWindow <NSObject>
@property (nonatomic,readonly) double idForWebExtensions; 
@property (nonatomic,readonly) char isFocused; 
@property (nonatomic,readonly) char isPrivate; 
@property (nonatomic,readonly) CGRect webExtensionWindowGeometry; 
@property (nonatomic,copy,readonly) NSString * webExtensionWindowType; 
@property (nonatomic,copy,readonly) NSString * webExtensionWindowState; 
@property (nonatomic,copy,readonly) NSArray * webExtensionTabs; 
@property (nonatomic,readonly) id<WBSWebExtensionTab> activeWebExtensionTab; 
@required
-(char)isFocused;
-(char)isPrivate;
-(double)idForWebExtensions;
-(CGRect)webExtensionWindowGeometry;
-(NSString *)webExtensionWindowType;
-(NSString *)webExtensionWindowState;
-(NSArray *)webExtensionTabs;
-(id<WBSWebExtensionTab>)activeWebExtensionTab;

@end

