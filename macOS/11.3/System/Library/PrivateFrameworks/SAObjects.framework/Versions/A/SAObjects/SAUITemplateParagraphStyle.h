/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAUITemplateParagraphStyle : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,copy) NSNumber * firstLineHeadIndent; 
@property (nonatomic,copy) NSNumber * getParagraphSpacingBefore; 
@property (nonatomic,copy) NSNumber * headIndent; 
@property (nonatomic,copy) NSNumber * lineHeightMultiple; 
@property (nonatomic,copy) NSNumber * lineSpacing; 
@property (nonatomic,copy) NSNumber * maximumLineHeight; 
@property (nonatomic,copy) NSNumber * minimumLineHeight; 
@property (nonatomic,copy) NSNumber * paragraphSpacing; 
@property (nonatomic,copy) NSNumber * tailIndent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paragraphStyle;
+(id)paragraphStyleWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAlignment:(NSString *)arg1 ;
-(NSString *)alignment;
-(id)groupIdentifier;
-(NSNumber *)firstLineHeadIndent;
-(NSNumber *)headIndent;
-(NSNumber *)tailIndent;
-(NSNumber *)lineHeightMultiple;
-(NSNumber *)maximumLineHeight;
-(NSNumber *)minimumLineHeight;
-(NSNumber *)lineSpacing;
-(NSNumber *)paragraphSpacing;
-(void)setFirstLineHeadIndent:(NSNumber *)arg1 ;
-(void)setHeadIndent:(NSNumber *)arg1 ;
-(void)setTailIndent:(NSNumber *)arg1 ;
-(void)setLineHeightMultiple:(NSNumber *)arg1 ;
-(void)setMaximumLineHeight:(NSNumber *)arg1 ;
-(void)setMinimumLineHeight:(NSNumber *)arg1 ;
-(void)setLineSpacing:(NSNumber *)arg1 ;
-(void)setParagraphSpacing:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)getParagraphSpacingBefore;
-(void)setGetParagraphSpacingBefore:(NSNumber *)arg1 ;
@end

