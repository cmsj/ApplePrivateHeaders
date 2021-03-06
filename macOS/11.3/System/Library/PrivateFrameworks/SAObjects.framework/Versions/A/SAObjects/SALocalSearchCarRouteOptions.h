/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchCarRouteOptions : AceObject <SAAceSerializable>

@property (assign,nonatomic) char avoidHighways; 
@property (assign,nonatomic) char avoidTolls; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)carRouteOptions;
+(id)carRouteOptionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setAvoidTolls:(char)arg1 ;
-(void)setAvoidHighways:(char)arg1 ;
-(char)avoidTolls;
-(char)avoidHighways;
-(id)encodedClassName;
@end

