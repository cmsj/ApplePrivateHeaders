/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAWLRemoveContentFromWatchList : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * siriLocale; 
@property (nonatomic,copy) NSString * title; 
+(id)removeContentFromWatchList;
+(id)removeContentFromWatchListWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)title;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(NSString *)siriLocale;
-(void)setSiriLocale:(NSString *)arg1 ;
@end

