//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableLayer.h"

@class MSImmutableShapePath, MSImmutableShapePath<MSShapePath>;

@interface _MSImmutableShapePathLayer : MSImmutableLayer
{
    long long _booleanOperation;
    BOOL _edited;
    MSImmutableShapePath *_path;
}

+ (Class)mutableClass;
@property(retain, nonatomic) MSImmutableShapePath<MSShapePath> *path; // @synthesize path=_path;
@property(nonatomic) BOOL edited; // @synthesize edited=_edited;
@property(nonatomic) long long booleanOperation; // @synthesize booleanOperation=_booleanOperation;
- (void).cxx_destruct;
- (BOOL)attributesEqualAttributesForObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)pathGeneric;
- (void)performInitWithMutableModelObject:(id)arg1;

@end
