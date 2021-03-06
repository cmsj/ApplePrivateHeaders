/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/Versions/A/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class NSData;

@interface MSCMSAppleHashAgilityAttribute : NSObject <MSCMSAttributeCoder> {

	NSData* _hashAgilityValue;

}

@property (retain,readonly) NSData * hashAgilityValue;              //@synthesize hashAgilityValue=_hashAgilityValue - In the implementation block
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(id)initWithHashAgilityValue:(id)arg1 ;
-(NSData *)hashAgilityValue;
@end

