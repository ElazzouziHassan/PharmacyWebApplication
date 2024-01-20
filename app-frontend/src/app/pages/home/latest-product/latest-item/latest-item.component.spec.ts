import { ComponentFixture, TestBed } from '@angular/core/testing';

import { LatestItemComponent } from './latest-item.component';

describe('LatestItemComponent', () => {
  let component: LatestItemComponent;
  let fixture: ComponentFixture<LatestItemComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      imports: [LatestItemComponent]
    })
    .compileComponents();
    
    fixture = TestBed.createComponent(LatestItemComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
