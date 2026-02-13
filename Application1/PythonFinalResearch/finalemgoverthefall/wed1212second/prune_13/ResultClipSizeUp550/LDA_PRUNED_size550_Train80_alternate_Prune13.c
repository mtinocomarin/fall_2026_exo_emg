// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_13\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.58%
// test_accuracy: 73.12%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt', 'act1\\trial_20.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_24.txt', 'act2\\trial_37.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_22.txt', 'act2\\trial_27.txt']}
// generated: 2025-12-17 17:06:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.170964, 0.170867,
    -0.239097, 0.239389,
    -0.010183, 0.010126,
    0.050476, -0.050603,
    2.282040, -2.282280,
    -2.067531, 2.067795,
    -0.140519, 0.140498,
    0.307324, -0.307355,
    -0.663256, 0.663348,
    -0.743138, 0.743020,
    0.216898, -0.216871,
    1.687127, -1.687140,
};

float Cg_init[2] = {
    -0.740738, -0.740810
};

float xstd_init[12] = {
    0.000919, 0.000086, 0.009063, 0.067223, 0.000807, 0.000137, 0.014736, 0.055264, 0.003565, 0.001026, 0.115352, 0.206549
};

float xmean_init[12] = {
    0.005685, -0.007750, 0.002456, 0.094737, 0.002439, -0.007846, 0.004982, 0.048842, 0.008978, -0.006633, 0.126316, 0.462316
};

