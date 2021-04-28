/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PFChecksum : NSObject <NSCopying> {

	PFChecksumBytes _bytes;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)string;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithBytes:(PFChecksumBytes)arg1 ;
-(id)initWithChecksumAsData:(id)arg1 ;
-(PFChecksumBytes)checksumBytes;
-(char)isEqualToBytes:(PFChecksumBytes)arg1 ;
@end
