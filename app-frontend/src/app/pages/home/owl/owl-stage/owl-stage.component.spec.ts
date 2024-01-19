import { ComponentFixture, TestBed } from '@angular/core/testing';

import { OwlStageComponent } from './owl-stage.component';

describe('OwlStageComponent', () => {
  let component: OwlStageComponent;
  let fixture: ComponentFixture<OwlStageComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      imports: [OwlStageComponent]
    })
    .compileComponents();
    
    fixture = TestBed.createComponent(OwlStageComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
