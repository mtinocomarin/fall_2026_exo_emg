// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 88.47%
// test_accuracy: 78.57%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_32.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_36.txt', 'act2\\trial_39.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 16:09:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.848433, 0.848386,
    -0.184773, 0.184777,
    0.623922, -0.623923,
    0.841831, -0.841806,
    1.423256, -1.423171,
    -1.214069, 1.213967,
    -0.332356, 0.332399,
    -0.245209, 0.245202,
    0.956990, -0.957258,
    -0.185031, 0.185691,
    -0.362310, 0.362109,
    -0.176557, 0.176290,
};

float Cg_init[2] = {
    -0.669506, -0.669521
};

float xstd_init[12] = {
    0.003246, 0.001110, 0.101606, 0.172388, 0.001403, 0.000437, 0.022973, 0.074380, 0.000544, 0.000079, 0.016417, 0.065587
};

float xmean_init[12] = {
    0.009535, -0.006351, 0.171299, 0.581818, 0.003169, -0.007733, 0.006407, 0.052533, 0.003109, -0.007812, 0.004545, 0.066559
};

