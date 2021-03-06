/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSUEncodedBlockInfo.h>

@class NSString;

@interface TSUEncodedBlockInfoInternal : NSObject <TSUEncodedBlockInfo> {

	unsigned long long _encodedLength;

}

@property (nonatomic,readonly) unsigned long long encodedLength;              //@synthesize encodedLength=_encodedLength - In the implementation block
@property (nonatomic,readonly) unsigned long long decodedLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)encodedLength;
-(unsigned long long)decodedLength;
-(id)initWithEncodedLength:(unsigned long long)arg1 ;
@end

