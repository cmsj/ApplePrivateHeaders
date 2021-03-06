/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class NSDictionary, NSString;

@interface AVSegmentedMediaClosedCaptionReport : NSObject {

	NSDictionary* _dict;

}

@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSString * ccInStreamID; 
@property (nonatomic,readonly) NSString * languageCode; 
@property (nonatomic,readonly) NSString * extendedLanguageTag; 
@property (getter=isEnabled,nonatomic,readonly) char enabled; 
@property (getter=isExcludedFromAutoSelection,nonatomic,readonly) char excludedFromAutoSelection; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)languageCode;
-(char)isEnabled;
-(NSString *)mediaType;
-(NSString *)extendedLanguageTag;
-(NSString *)ccInStreamID;
-(char)isExcludedFromAutoSelection;
@end

