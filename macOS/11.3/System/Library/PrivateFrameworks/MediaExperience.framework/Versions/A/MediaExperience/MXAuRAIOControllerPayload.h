/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/Versions/A/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaExperience/MediaExperience-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MXAuRAIOControllerPayload : NSObject <NSCopying> {

	weak_ptr<aura::IOController>* _ioController;

}

@property (nonatomic,readonly) weak_ptr<aura::IOController>* ioController;              //@synthesize ioController=_ioController - In the implementation block
-(id)initWithIOController:(weak_ptr<aura::IOController>*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(weak_ptr<aura::IOController>*)ioController;
@end

