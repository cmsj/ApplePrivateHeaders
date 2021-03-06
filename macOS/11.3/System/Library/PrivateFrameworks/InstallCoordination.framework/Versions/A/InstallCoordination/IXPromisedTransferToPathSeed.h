/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/Versions/A/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/IXOwnedDataPromiseSeed.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface IXPromisedTransferToPathSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying> {

	char _shouldCopy;
	char _tryDeltaCopy;
	NSURL* _transferPath;

}

@property (nonatomic,retain) NSURL * transferPath;              //@synthesize transferPath=_transferPath - In the implementation block
@property (assign,nonatomic) char shouldCopy;                   //@synthesize shouldCopy=_shouldCopy - In the implementation block
@property (assign,nonatomic) char tryDeltaCopy;                 //@synthesize tryDeltaCopy=_tryDeltaCopy - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)clientPromiseClass;
-(void)setTransferPath:(NSURL *)arg1 ;
-(NSURL *)transferPath;
-(char)shouldCopy;
-(void)setShouldCopy:(char)arg1 ;
-(char)tryDeltaCopy;
-(void)setTryDeltaCopy:(char)arg1 ;
@end

