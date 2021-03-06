/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFShowWidgetConfigurationEvent : WFEvent {

	NSString* _key;
	NSString* _appBundleIdentifier;
	NSString* _intentType;
	NSString* _sizeClass;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * intentType;                       //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,copy) NSString * sizeClass;                        //@synthesize sizeClass=_sizeClass - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)intentType;
-(void)setIntentType:(NSString *)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setSizeClass:(NSString *)arg1 ;
-(NSString *)sizeClass;
-(id)initWithAppBundleIdentifier:(id)arg1 intentType:(id)arg2 sizeClass:(id)arg3 ;
@end

