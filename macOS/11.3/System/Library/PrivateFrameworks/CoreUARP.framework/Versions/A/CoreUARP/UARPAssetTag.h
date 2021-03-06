/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/Versions/A/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUARP/CoreUARP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UARPAssetTag : NSObject <NSCopying, NSSecureCoding> {

	char _char1;
	char _char2;
	char _char3;
	char _char4;
	unsigned _tag;

}

@property (readonly) char char1;                //@synthesize char1=_char1 - In the implementation block
@property (readonly) char char2;                //@synthesize char2=_char2 - In the implementation block
@property (readonly) char char3;                //@synthesize char3=_char3 - In the implementation block
@property (readonly) char char4;                //@synthesize char4=_char4 - In the implementation block
@property (readonly) unsigned tag;              //@synthesize tag=_tag - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)tag;
-(id)initWithChar1:(char)arg1 char2:(char)arg2 char3:(char)arg3 char4:(char)arg4 ;
-(char)char1;
-(char)char2;
-(char)char3;
-(char)char4;
@end

