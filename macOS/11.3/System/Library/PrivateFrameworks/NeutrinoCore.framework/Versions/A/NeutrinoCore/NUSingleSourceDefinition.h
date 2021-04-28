/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUSourceDefinition.h>

@protocol NUSourceDerivation;
@interface NUSingleSourceDefinition : NUSourceDefinition {

	id<NUSourceDerivation> _sourceDerivation;

}

@property (retain) id<NUSourceDerivation> sourceDerivation;              //@synthesize sourceDerivation=_sourceDerivation - In the implementation block
-(id)init;
-(id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id<NUSourceDerivation>)sourceDerivation;
-(void)setSourceDerivation:(id<NUSourceDerivation>)arg1 ;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
@end
