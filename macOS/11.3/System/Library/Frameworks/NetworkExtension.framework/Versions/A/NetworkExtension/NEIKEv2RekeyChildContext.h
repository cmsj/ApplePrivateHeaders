/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2RequestContext.h>

@interface NEIKEv2RekeyChildContext : NEIKEv2RequestContext {

	unsigned _childID;

}

@property (assign,nonatomic) unsigned childID;              //@synthesize childID=_childID - In the implementation block
-(unsigned)childID;
-(void)setChildID:(unsigned)arg1 ;
-(id)initWithRekeyChildID:(unsigned)arg1 ;
-(id)description;
@end

