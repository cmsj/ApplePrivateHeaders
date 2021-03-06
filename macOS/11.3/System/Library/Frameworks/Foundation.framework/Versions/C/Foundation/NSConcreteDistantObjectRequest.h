/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSDistantObjectRequest.h>

@class NSInvocation, NSArray, NSConnection;

@interface NSConcreteDistantObjectRequest : NSDistantObjectRequest {

	NSInvocation* invocation;
	NSArray* importedObjects;
	id conversation;
	unsigned sequence;
	NSConnection* connection;

}
-(void)dealloc;
-(id)connection;
-(id)invocation;
-(id)conversation;
-(void)replyWithException:(id)arg1 ;
-(id)initWithInvocation:(id)arg1 conversation:(id)arg2 sequence:(unsigned)arg3 importedObjects:(id)arg4 connection:(id)arg5 ;
@end

