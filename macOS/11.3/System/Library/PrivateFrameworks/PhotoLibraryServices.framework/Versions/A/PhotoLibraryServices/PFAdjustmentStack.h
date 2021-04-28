/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSArray, NSOrderedSet;

@interface PFAdjustmentStack : NSObject <NSCopying, NSFastEnumeration> {

	NSArray* _adjustments;
	NSOrderedSet* _maskUUIDs;
	unsigned long long _formatVersion;

}
+(char)isValidEnvelopeDictionary:(id)arg1 errors:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF40*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithEnvelopeDictionary:(id)arg1 ;
-(id)envelopeDictionary;
-(id)initWithAdjustments:(id)arg1 ;
-(id)adjustmentAtIndex:(unsigned long long)arg1 ;
-(id)firstAdjustmentWithIdentifier:(id)arg1 ;
-(id)adjustmentsWithIdentifier:(id)arg1 ;
-(id)maskUUIDs;
@end
