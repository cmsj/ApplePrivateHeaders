/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@class WFContentProperty, NSSet;

@interface WFContentSortDescriptor : NSObject <WFContentPropertyContainer> {

	char _ascending;
	WFContentProperty* _property;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) WFContentProperty * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,copy,readonly) id comparator;                        //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) char ascending;                            //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) NSSet * containedProperties; 
+(id)sortDescriptorWithProperty:(id)arg1 ascending:(char)arg2 comparator:(/*^block*/id)arg3 ;
+(id)randomSortDescriptor;
-(id)description;
-(char)ascending;
-(id)comparator;
-(WFContentProperty *)property;
-(NSSet *)containedProperties;
-(id)initWithProperty:(id)arg1 ascending:(char)arg2 comparator:(/*^block*/id)arg3 ;
@end
