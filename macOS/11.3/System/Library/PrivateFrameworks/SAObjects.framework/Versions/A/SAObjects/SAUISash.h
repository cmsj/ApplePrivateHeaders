/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAUIColor, NSArray, SAUIImageResource;

@interface SAUISash : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,retain) SAUIColor * backgroundColor; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,retain) SAUIColor * textColor; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sash;
+(id)sashWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIImageResource *)image;
-(SAUIColor *)backgroundColor;
-(SAUIColor *)textColor;
-(void)setTextColor:(SAUIColor *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)applicationBundleIdentifier;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
@end
