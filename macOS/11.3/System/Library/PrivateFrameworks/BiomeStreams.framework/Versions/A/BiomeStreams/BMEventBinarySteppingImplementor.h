/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/Versions/A/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMEventBinaryStepping.h>

@class NSString;

@interface BMEventBinarySteppingImplementor : BMEventBase <BMEventBinaryStepping> {

	char starting;

}

@property (assign,getter=isStarting,nonatomic) char starting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isValidWithContext:(id)arg1 error:(id*)arg2 ;
-(char)isCompleteWithContext:(id)arg1 error:(id*)arg2 ;
-(char)isStarting;
-(void)setStarting:(char)arg1 ;
@end
