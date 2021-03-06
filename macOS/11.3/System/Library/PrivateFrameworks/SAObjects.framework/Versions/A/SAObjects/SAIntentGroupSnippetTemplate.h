/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAUISnippet, NSArray, NSString;

@interface SAIntentGroupSnippetTemplate : SADomainObject

@property (nonatomic,retain) SAUISnippet * detailSnippet; 
@property (nonatomic,copy) NSArray * intentSlotKeyPaths; 
@property (nonatomic,copy) NSString * key; 
+(id)snippetTemplate;
+(id)snippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUISnippet *)detailSnippet;
-(void)setDetailSnippet:(SAUISnippet *)arg1 ;
-(NSArray *)intentSlotKeyPaths;
-(void)setIntentSlotKeyPaths:(NSArray *)arg1 ;
@end

