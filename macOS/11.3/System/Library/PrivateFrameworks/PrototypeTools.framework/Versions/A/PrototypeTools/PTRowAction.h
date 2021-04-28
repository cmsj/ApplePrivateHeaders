/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/Versions/A/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PTRowAction : NSObject <NSSecureCoding> {

	/*^block*/id _handler;
	char _isEncodable;

}

@property (assign,nonatomic) char isEncodable;              //@synthesize isEncodable=_isEncodable - In the implementation block
@property (nonatomic,readonly) id handler; 
+(char)supportsSecureCoding;
+(id)actionWithHandler:(/*^block*/id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)handler;
-(char)isEncodable;
-(void)setIsEncodable:(char)arg1 ;
-(/*^block*/id)defaultHandler;
-(char)deselectsRowOnSuccess;
@end
