/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BRFieldCKInfo;

@interface BRCServerZoneHealthState : NSObject <NSSecureCoding, NSCopying> {

	int _state;
	BRFieldCKInfo* _ckInfo;

}

@property (nonatomic,readonly) BRFieldCKInfo * ckInfo;              //@synthesize ckInfo=_ckInfo - In the implementation block
@property (nonatomic,readonly) int state;                           //@synthesize state=_state - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)state;
-(BRFieldCKInfo *)ckInfo;
-(id)initWithCKInfo:(id)arg1 state:(int)arg2 ;
-(id)initWithServerZoneHealthState:(id)arg1 ;
@end

