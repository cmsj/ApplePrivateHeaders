/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVSearchMatchDescription.h>

@protocol NSCopyingNSObject;
@class NSString;

@interface AVLegibleMediaSearchMatchDescription : AVSearchMatchDescription {

	id<NSCopying><NSObject> _cueIdentifier;
	NSString* _cueString;
	NSRange _cueStringMatchRange;
	unsigned long long _cueMatchIndex;

}

@property (nonatomic,readonly) id<NSCopying><NSObject> cueIdentifier;              //@synthesize cueIdentifier=_cueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * cueString;                               //@synthesize cueString=_cueString - In the implementation block
@property (nonatomic,readonly) NSRange cueStringMatchRange;                        //@synthesize cueStringMatchRange=_cueStringMatchRange - In the implementation block
@property (nonatomic,readonly) unsigned long long cueMatchIndex;                   //@synthesize cueMatchIndex=_cueMatchIndex - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithPresentationTimeRange:(SCD_Struct_CM5)arg1 cueIdentifier:(id)arg2 cueString:(id)arg3 cueStringMatchRange:(NSRange)arg4 cueMatchIndex:(unsigned long long)arg5 ;
-(id<NSCopying><NSObject>)cueIdentifier;
-(NSString *)cueString;
-(NSRange)cueStringMatchRange;
-(unsigned long long)cueMatchIndex;
@end
