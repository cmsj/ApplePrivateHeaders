/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputMenuUI.framework/Versions/A/TextInputMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputMenuUI/CPInputSource.h>

@class NSArray, NSString;

@interface HandwritingInputSource : CPInputSource

@property (nonatomic,retain,readonly) NSArray * supportedLanguages; 
@property (nonatomic,retain) NSArray * enabledLanguages; 
@property (nonatomic,retain) NSString * selectedLanguage; 
+(id)HIToolboxUserDefaults;
-(void)setEnabledLanguages:(NSArray *)arg1 ;
-(char)isEnabled;
-(void)enable;
-(char)isSelected;
-(NSArray *)supportedLanguages;
-(char)activateForcibly:(id)arg1 ;
-(void)setSelectedLanguage:(NSString *)arg1 ;
-(NSString *)selectedLanguage;
-(NSArray *)enabledLanguages;
-(id)localizedInputSourceNameForLanguage:(id)arg1 ;
@end

