/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class VMUDominatorGraph;

@interface VMUDirectDominees : NSEnumerator {

	VMUDominatorGraph* _dg;
	unsigned _node;

}
-(id)nextObject;
-(id)initWithDominatorGraph:(id)arg1 rootNode:(unsigned)arg2 ;
@end

