/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistiveControlSupport/ACSHPlistObject.h>

@class NSString, NSImage;

@interface ACSHApplication : ACSHPlistObject {

	NSString* _localizedName;
	NSString* _path;
	NSString* _bundleID;
	NSImage* __icon;

}

@property (nonatomic,retain) NSImage * _icon;                             //@synthesize _icon=__icon - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                      //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * path;                               //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * resolvedPath; 
@property (nonatomic,readonly) NSImage * icon; 
+(id)createWithItemAtPath:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)path;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSString *)localizedName;
-(void)setPath:(NSString *)arg1 ;
-(NSImage *)_icon;
-(NSImage *)icon;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)set_icon:(NSImage *)arg1 ;
-(id)dictionaryForSaving;
-(void)_configureWithPlistDictionary:(id)arg1 ;
-(void)_resetDisplayValues;
-(NSString *)resolvedPath;
@end
