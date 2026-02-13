// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.80%
// test_accuracy: 73.21%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-12 15:50:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.147528, 1.147515,
    -0.115989, 0.115992,
    0.822995, -0.823024,
    0.903819, -0.903795,
    1.078227, -1.078246,
    -1.621260, 1.621292,
    0.096481, -0.096483,
    0.154985, -0.154999,
    -0.495734, 0.495697,
    0.756783, -0.756608,
    -0.610196, 0.610130,
    0.087994, -0.088079,
};

float Cg_init[2] = {
    -0.555721, -0.555715
};

float xstd_init[12] = {
    0.003684, 0.001361, 0.102957, 0.172217, 0.001756, 0.000539, 0.032064, 0.089456, 0.001263, 0.000096, 0.019318, 0.066172
};

float xmean_init[12] = {
    0.009829, -0.006229, 0.170318, 0.581071, 0.003333, -0.007695, 0.008810, 0.056548, 0.003271, -0.007803, 0.005079, 0.069048
};

