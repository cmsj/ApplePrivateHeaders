/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Versions/A/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CTMessageAddress.h>

@class NSString;

@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress> {

	NSString* _address;

}

@property (readonly) NSString * address;              //@synthesize address=_address - In the implementation block
+(id)emailAddress:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)address;
-(id)initWithAddress:(id)arg1 ;
-(id)encodedString;
-(id)canonicalFormat;
@end

