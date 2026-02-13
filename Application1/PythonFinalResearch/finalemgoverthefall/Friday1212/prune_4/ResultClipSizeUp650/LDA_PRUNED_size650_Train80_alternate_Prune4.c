// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.02%
// test_accuracy: 71.35%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 15:47:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.588687, 0.588704,
    -0.295303, 0.295266,
    0.436443, -0.436462,
    0.641238, -0.641210,
    0.750017, -0.749877,
    -0.797228, 0.797069,
    -0.016964, 0.017000,
    -0.055334, 0.055323,
    -0.451150, 0.450985,
    0.259409, -0.259121,
    -0.288000, 0.287919,
    0.162795, -0.162940,
};

float Cg_init[2] = {
    -0.281768, -0.281749
};

float xstd_init[12] = {
    0.003768, 0.001372, 0.107741, 0.173198, 0.001464, 0.000427, 0.025485, 0.074692, 0.001695, 0.000091, 0.015785, 0.068018
};

float xmean_init[12] = {
    0.009863, -0.006223, 0.180358, 0.589226, 0.003142, -0.007749, 0.006270, 0.048214, 0.003237, -0.007809, 0.003968, 0.066131
};

