/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/Versions/A/DesktopServicesPriv
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DesktopServicesPriv/DesktopServicesPriv-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FINode : NSObject <NSCopying>
+(id)nodeFromNodeRef:(OpaqueNodeRefRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopy;
-(id)original;
-(OpaqueNodeRefRef)nodeRef;
-(void*)asTNode;
@end

