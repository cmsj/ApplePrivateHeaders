/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADRelativeRect : NSObject <NSCopying> {

	float mLeft;
	float mTop;
	float mRight;
	float mBottom;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(float)left;
-(float)right;
-(float)top;
-(float)bottom;
-(void)setBottom:(float)arg1 ;
-(void)setLeft:(float)arg1 ;
-(void)setRight:(float)arg1 ;
-(void)setTop:(float)arg1 ;
-(id)initWithLeft:(float)arg1 top:(float)arg2 right:(float)arg3 bottom:(float)arg4 ;
@end
