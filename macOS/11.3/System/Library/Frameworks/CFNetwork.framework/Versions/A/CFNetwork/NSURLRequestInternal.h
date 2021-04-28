/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSURLRequestInternal : NSObject <NSCopying> {

	URLRequest* _request;

}

@property (readonly) URLRequest* _inner; 
-(id)_initWithMessage:(CFHTTPMessageRef)arg1 bodyParts:(CFArrayRef)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 mainDocumentURL:(CFURLRef)arg5 mutable:(unsigned char)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(URLRequest*)_inner;
@end
