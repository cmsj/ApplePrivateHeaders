/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSNumber, SAUIImageResource, NSString;

@interface SAAnswerObjectLine : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSNumber * imageInverted; 
@property (nonatomic,retain) SAUIImageResource * imageResource; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectLine;
+(id)objectLineWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(NSURL *)image;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)encodedClassName;
-(SAUIImageResource *)imageResource;
-(void)setImageResource:(SAUIImageResource *)arg1 ;
-(NSNumber *)imageInverted;
-(void)setImageInverted:(NSNumber *)arg1 ;
@end
