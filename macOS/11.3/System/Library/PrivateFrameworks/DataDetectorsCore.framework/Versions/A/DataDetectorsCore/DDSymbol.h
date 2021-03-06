/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DDSymbol : NSObject <NSSecureCoding> {

	int _type;
	_DDSymbolUnion u;
	NSString* _displayName;

}
+(char)supportsSecureCoding;
-(id)initWithTokenId:(long long)arg1 ;
-(id)initWithNonTerminal:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(int)symbolType;
@end

